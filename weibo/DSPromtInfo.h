//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DSBaseObject.h"

@class NSString;

@interface DSPromtInfo : DSBaseObject
{
    _Bool _clickMiddle;
    int _loadDirection;
    NSString *_lastRefreshTime;
}

@property(nonatomic) _Bool clickMiddle; // @synthesize clickMiddle=_clickMiddle;
@property(retain, nonatomic) NSString *lastRefreshTime; // @synthesize lastRefreshTime=_lastRefreshTime;
@property(nonatomic) int loadDirection; // @synthesize loadDirection=_loadDirection;
- (void).cxx_destruct;

@end

