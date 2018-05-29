//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "WBAudioPlayerDelegate-Protocol.h"

@class NSString, WBAudioPlayer;
@protocol WBJSAudioPlayerDelegate;

@interface WBJSAudioPlayer : NSObject <WBAudioPlayerDelegate>
{
    WBAudioPlayer *_audioPlayer;
    id <WBJSAudioPlayerDelegate> _delegate;
}

+ (id)sharedPlayer;
@property(nonatomic) __weak id <WBJSAudioPlayerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)audioPlayer:(id)arg1 proximityStateChanged:(_Bool)arg2;
- (void)audioPlayer:(id)arg1 didFailWithError:(id)arg2;
- (void)audioPlayer:(id)arg1 didFinishPlayingFile:(id)arg2;
- (void)stop:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)playFile:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) WBAudioPlayer *audioPlayer; // @synthesize audioPlayer=_audioPlayer;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

