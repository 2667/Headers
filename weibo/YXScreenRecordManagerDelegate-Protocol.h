//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, NSString, YXScreenRecordManager;

@protocol YXScreenRecordManagerDelegate <NSObject>
- (void)yx_screenRecordManager:(YXScreenRecordManager *)arg1 statusDidChange:(long long)arg2;
- (void)yx_screenRecordManager:(YXScreenRecordManager *)arg1 videoRecordSuccessWithPath:(NSString *)arg2;
- (void)yx_screenRecordManager:(YXScreenRecordManager *)arg1 videoRecordFailWithError:(NSError *)arg2;
@end

