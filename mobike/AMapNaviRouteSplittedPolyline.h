//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray;

@interface AMapNaviRouteSplittedPolyline : NSObject <NSCopying>
{
    long long _polylineType;
    NSArray *_coordiantes;
    NSArray *_coordinateIndexes;
    NSArray *_trafficStatuses;
}

@property(retain, nonatomic) NSArray *trafficStatuses; // @synthesize trafficStatuses=_trafficStatuses;
@property(retain, nonatomic) NSArray *coordinateIndexes; // @synthesize coordinateIndexes=_coordinateIndexes;
@property(retain, nonatomic) NSArray *coordiantes; // @synthesize coordiantes=_coordiantes;
@property(nonatomic) long long polylineType; // @synthesize polylineType=_polylineType;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;

@end
