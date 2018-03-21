//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MGLiveDetectionManager, MGLivenessDetectionFrame, NSString;

@protocol MGLiveDetectionDelegate <NSObject>
- (void)detectionManager:(MGLiveDetectionManager *)arg1 checkError:(NSString *)arg2;
- (void)detectionManager:(MGLiveDetectionManager *)arg1 liveChangeAction:(int)arg2 timeOut:(unsigned long long)arg3 currentActionStep:(unsigned long long)arg4;
- (void)detectionManager:(MGLiveDetectionManager *)arg1 finishWithError:(int)arg2;
- (void)detectionManager:(MGLiveDetectionManager *)arg1 frameWithImage:(MGLivenessDetectionFrame *)arg2;
- (void)detectionManagerSucessLiveDetection:(MGLiveDetectionManager *)arg1 liveDetectionType:(long long)arg2;
- (void)detectionManager:(MGLiveDetectionManager *)arg1 finishWithStep:(long long)arg2;
@end
