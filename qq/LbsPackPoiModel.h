//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface LbsPackPoiModel : NSObject
{
    int _poiLat;
    int _poiLon;
    unsigned long long _poiId;
    NSString *_poiName;
    NSString *_poiAddress;
}

@property(retain, nonatomic) NSString *poiAddress; // @synthesize poiAddress=_poiAddress;
@property(retain, nonatomic) NSString *poiName; // @synthesize poiName=_poiName;
@property(nonatomic) int poiLon; // @synthesize poiLon=_poiLon;
@property(nonatomic) int poiLat; // @synthesize poiLat=_poiLat;
@property(nonatomic) unsigned long long poiId; // @synthesize poiId=_poiId;
- (void).cxx_destruct;
- (_Bool)compare:(id)arg1;
- (id)description;

@end
