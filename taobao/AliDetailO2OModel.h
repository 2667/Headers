//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AliDetailComponentModel.h"

@class NSString;

@interface AliDetailO2OModel : AliDetailComponentModel
{
    _Bool _distanceEnabled;
    _Bool _perPriceEnabled;
    _Bool _enterEnabled;
    float _longitude;
    float _latitude;
    NSString *_itemId;
    NSString *_shopId;
    NSString *_name;
    NSString *_address;
    NSString *_total;
    NSString *_distance;
    NSString *_distanceText;
    NSString *_perPrice;
    NSString *_perPriceText;
    NSString *_enterText;
    NSString *_enterUrl;
    NSString *_poiUrl;
    double _height;
}

@property(nonatomic) double height; // @synthesize height=_height;
@property(copy, nonatomic) NSString *poiUrl; // @synthesize poiUrl=_poiUrl;
@property(nonatomic) _Bool enterEnabled; // @synthesize enterEnabled=_enterEnabled;
@property(copy, nonatomic) NSString *enterUrl; // @synthesize enterUrl=_enterUrl;
@property(copy, nonatomic) NSString *enterText; // @synthesize enterText=_enterText;
@property(nonatomic) _Bool perPriceEnabled; // @synthesize perPriceEnabled=_perPriceEnabled;
@property(copy, nonatomic) NSString *perPriceText; // @synthesize perPriceText=_perPriceText;
@property(copy, nonatomic) NSString *perPrice; // @synthesize perPrice=_perPrice;
@property(nonatomic) _Bool distanceEnabled; // @synthesize distanceEnabled=_distanceEnabled;
@property(copy, nonatomic) NSString *distanceText; // @synthesize distanceText=_distanceText;
@property(copy, nonatomic) NSString *distance; // @synthesize distance=_distance;
@property(copy, nonatomic) NSString *total; // @synthesize total=_total;
@property(copy, nonatomic) NSString *address; // @synthesize address=_address;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) float latitude; // @synthesize latitude=_latitude;
@property(nonatomic) float longitude; // @synthesize longitude=_longitude;
@property(copy, nonatomic) NSString *shopId; // @synthesize shopId=_shopId;
@property(copy, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
- (void).cxx_destruct;
- (id)updateWithDictionary:(id)arg1;
- (void)parseDataFromDetailModel:(id)arg1;
- (id)initWithDetailModel:(id)arg1 layoutModel:(id)arg2;

@end
