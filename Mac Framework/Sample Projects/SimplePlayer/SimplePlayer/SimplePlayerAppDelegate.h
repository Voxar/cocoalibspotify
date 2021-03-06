//
//  SimplePlayerAppDelegate.h
//  SimplePlayer
//
//  Created by Daniel Kennett on 04/05/2011.
/*
 Copyright (c) 2011, Spotify AB
 All rights reserved.
 
 Redistribution and use in source and binary forms, with or without
 modification, are permitted provided that the following conditions are met:
 * Redistributions of source code must retain the above copyright
 notice, this list of conditions and the following disclaimer.
 * Redistributions in binary form must reproduce the above copyright
 notice, this list of conditions and the following disclaimer in the
 documentation and/or other materials provided with the distribution.
 * Neither the name of Spotify AB nor the names of its contributors may 
 be used to endorse or promote products derived from this software 
 without specific prior written permission.
 
 THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 DISCLAIMED. IN NO EVENT SHALL SPOTIFY AB BE LIABLE FOR ANY DIRECT, INDIRECT,
 INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT 
 LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, 
 OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
 LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
 OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF
 ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#import <Cocoa/Cocoa.h>
#import <CocoaLibSpotify/CocoaLibSpotify.h>
#import "SPPlaybackManager.h"

@interface SimplePlayerAppDelegate : NSObject  <NSApplicationDelegate, SPSessionDelegate> {
@private
	NSWindow *window;
	NSPanel *loginSheet;
	NSTextField *userNameField;
	NSSecureTextField *passwordField;
	NSTimeInterval currentTrackPosition;
	
	SPPlaybackManager *playbackManager;
	NSTextField *trackURLField;
	NSSlider *playbackProgressSlider;
}

@property (assign) IBOutlet NSSlider *playbackProgressSlider;
@property (assign) IBOutlet NSTextField *trackURLField;
@property (assign) IBOutlet NSTextField *userNameField;
@property (assign) IBOutlet NSSecureTextField *passwordField;
@property (assign) IBOutlet NSPanel *loginSheet;
@property (assign) IBOutlet NSWindow *window;

- (IBAction)login:(id)sender;
- (IBAction)quitFromLoginSheet:(id)sender;

#pragma mark -

@property (nonatomic, readwrite, retain) SPPlaybackManager *playbackManager;

- (IBAction)playTrack:(id)sender;
- (IBAction)seekToPosition:(id)sender;

@end
