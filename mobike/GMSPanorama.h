//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GMSStreetViewPanoramaData, NSArray, NSString;

@interface GMSPanorama : NSObject
{
    NSString *_panoramaID;
    NSArray *_links;
    GMSStreetViewPanoramaData *_panoramaData;
}

+ (id)panoramaLinksFromStreetViewLinks:(id)arg1;
@property(readonly, nonatomic) GMSStreetViewPanoramaData *panoramaData; // @synthesize panoramaData=_panoramaData;
@property(readonly, copy, nonatomic) NSArray *links; // @synthesize links=_links;
@property(readonly, copy, nonatomic) NSString *panoramaID; // @synthesize panoramaID=_panoramaID;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) CDStruct_c3b9c2ee coordinate;
- (id)initWithPanoramaData:(id)arg1;
- (id)init;

@end
