//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AMapNaviPoint, NSArray, NSString;

@interface AMapNaviCalcRouteRequest : NSObject
{
    _Bool _requireExtension;
    NSString *_versionString;
    NSArray *_startPoints;
    AMapNaviPoint *_endPoint;
    NSArray *_wayPoints;
    long long _strategy;
    NSString *_province;
    NSString *_number;
}

@property(retain, nonatomic) NSString *number; // @synthesize number=_number;
@property(retain, nonatomic) NSString *province; // @synthesize province=_province;
@property(nonatomic) _Bool requireExtension; // @synthesize requireExtension=_requireExtension;
@property(nonatomic) long long strategy; // @synthesize strategy=_strategy;
@property(retain, nonatomic) NSArray *wayPoints; // @synthesize wayPoints=_wayPoints;
@property(retain, nonatomic) AMapNaviPoint *endPoint; // @synthesize endPoint=_endPoint;
@property(retain, nonatomic) NSArray *startPoints; // @synthesize startPoints=_startPoints;
@property(retain, nonatomic) NSString *versionString; // @synthesize versionString=_versionString;
- (void).cxx_destruct;
- (id)stringFromEndPoints;
- (id)stringFromWayPoints;
- (id)stringFromStartPoints;
- (id)init;

@end
