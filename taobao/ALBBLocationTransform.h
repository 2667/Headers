//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface ALBBLocationTransform : NSObject
{
}

+ (double)transformLon:(double)arg1 bdLon:(double)arg2;
+ (double)transformLat:(double)arg1 bdLon:(double)arg2;
+ (_Bool)isLocationOutOfChina:(double)arg1 lat:(double)arg2;
+ (void)transformFromWGSToGCJ:(double)arg1 lat:(double)arg2 offsetLon:(double *)arg3 offsetLat:(double *)arg4;
+ (struct CLLocationCoordinate2D)offsetCoordinate:(struct CLLocationCoordinate2D)arg1;

@end

