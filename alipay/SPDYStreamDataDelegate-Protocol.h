//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SPDYStream;

@protocol SPDYStreamDataDelegate <NSObject>
- (void)streamFinished:(SPDYStream *)arg1;
- (void)streamDataAvailable:(SPDYStream *)arg1;
@end

