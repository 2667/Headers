//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MovieSDKHttpRequest.h"

@class NSString;

@interface MovieSDKGetPurchaseCinemasRequest : MovieSDKHttpRequest
{
    NSString *_film_id;
    NSString *_film_name;
    NSString *_region_name;
    NSString *_show_date;
    NSString *_show_time;
    NSString *_support;
    NSString *_size;
    NSString *_page;
}

@property(retain, nonatomic) NSString *page; // @synthesize page=_page;
@property(retain, nonatomic) NSString *size; // @synthesize size=_size;
@property(retain, nonatomic) NSString *support; // @synthesize support=_support;
@property(retain, nonatomic) NSString *show_time; // @synthesize show_time=_show_time;
@property(retain, nonatomic) NSString *show_date; // @synthesize show_date=_show_date;
@property(retain, nonatomic) NSString *region_name; // @synthesize region_name=_region_name;
@property(retain, nonatomic) NSString *film_name; // @synthesize film_name=_film_name;
@property(retain, nonatomic) NSString *film_id; // @synthesize film_id=_film_id;
- (void).cxx_destruct;
- (_Bool)analysisData:(id)arg1;
- (id)params;
- (id)requestPath;
- (id)init;

@end

