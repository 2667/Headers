//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GMSTileTypeExpirations;
@protocol GMSTimingClock;

@protocol GMSTileExpirationState <NSObject>
- (long long)validationTime;
- (_Bool)hasPerTileExpiredForClock:(id <GMSTimingClock>)arg1 perTileExpirationPeriodMS:(long long)arg2;
- (_Bool)hasExpiredForClock:(id <GMSTimingClock>)arg1 tileTypeExpirations:(GMSTileTypeExpirations *)arg2;
@end
