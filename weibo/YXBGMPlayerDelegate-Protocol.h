//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol YXBGMPlayerDelegate <NSObject>
- (void)onBGMPlayerLogCallback:(int)arg1 msg:(NSString *)arg2;
- (void)onBGMPlayerNetStatisticsCallback:(int)arg1 msg:(NSString *)arg2;
- (void)onBGMPlayerEventCallback:(unsigned long long)arg1 msg:(NSString *)arg2;
@end

