//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "CLLocationManagerDelegate-Protocol.h"

@class CLLocationManager, NSString;

@interface WBNLLocationManager : NSObject <CLLocationManagerDelegate>
{
    CLLocationManager *_locationManager;
    CDUnknownBlockType _getLocationHanlder;
    NSString *_city;
}

+ (void)getCityNameWithCompeletion:(CDUnknownBlockType)arg1;
+ (id)sharedInstance;
@property(copy, nonatomic) NSString *city; // @synthesize city=_city;
@property(copy, nonatomic) CDUnknownBlockType getLocationHanlder; // @synthesize getLocationHanlder=_getLocationHanlder;
@property(retain, nonatomic) CLLocationManager *locationManager; // @synthesize locationManager=_locationManager;
- (void).cxx_destruct;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
@property(readonly, nonatomic) NSString *cityName;
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate;
- (void)startLocation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

