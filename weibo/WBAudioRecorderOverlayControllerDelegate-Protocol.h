//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSError, WBAudioRecorderOverlayController;

@protocol WBAudioRecorderOverlayControllerDelegate <NSObject>
- (void)audioRecorderOverlayController:(WBAudioRecorderOverlayController *)arg1 didCancelWithError:(NSError *)arg2;
- (void)audioRecorderOverlayControllerDidCancel:(WBAudioRecorderOverlayController *)arg1;
- (void)audioRecorderOverlayController:(WBAudioRecorderOverlayController *)arg1 didRecordSlice:(NSData *)arg2 total:(int)arg3;
- (void)audioRecorderOverlayController:(WBAudioRecorderOverlayController *)arg1 didFinishWithLastSlice:(NSData *)arg2 total:(int)arg3;

@optional
- (void)audioRecorderOverlayControllerDidReachMaximumRecordingDuration:(WBAudioRecorderOverlayController *)arg1;
- (void)audioRecorderOverlayControllerEndInterruption:(WBAudioRecorderOverlayController *)arg1;
- (void)audioRecorderOverlayControllerBeginInterruption:(WBAudioRecorderOverlayController *)arg1;
@end

