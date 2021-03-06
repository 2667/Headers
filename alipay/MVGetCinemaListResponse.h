//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MVMtopBaseResponse.h"

@class MVCinemaFilterModel, NSArray;

@interface MVGetCinemaListResponse : MVMtopBaseResponse
{
    _Bool ___mtopCinemas_MVCinemaModel;
    _Bool ___preScheduleDates_NSString;
    NSArray *_mtopCinemas;
    long long _totalCount;
    MVCinemaFilterModel *_cinemaFilter;
    NSArray *_preScheduleDates;
}

@property(readonly, nonatomic) _Bool __preScheduleDates_NSString; // @synthesize __preScheduleDates_NSString=___preScheduleDates_NSString;
@property(retain, nonatomic) NSArray *preScheduleDates; // @synthesize preScheduleDates=_preScheduleDates;
@property(retain, nonatomic) MVCinemaFilterModel *cinemaFilter; // @synthesize cinemaFilter=_cinemaFilter;
@property(nonatomic) long long totalCount; // @synthesize totalCount=_totalCount;
@property(readonly, nonatomic) _Bool __mtopCinemas_MVCinemaModel; // @synthesize __mtopCinemas_MVCinemaModel=___mtopCinemas_MVCinemaModel;
@property(retain, nonatomic) NSArray *mtopCinemas; // @synthesize mtopCinemas=_mtopCinemas;
- (void).cxx_destruct;
- (id)dateArrayFromCombinedCinemas;
- (unsigned long long)numberOfCinemasInResponse;
- (void)appendCinemaList:(id)arg1;

@end

