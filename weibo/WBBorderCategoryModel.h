//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBModelObject.h"

@class NSString;

@interface WBBorderCategoryModel : WBModelObject
{
    long long _tabID;
    long long _type;
    long long _category;
    NSString *_name;
    NSString *_nameEnglish;
    NSString *_nameTaiwan;
    NSString *_sort;
    NSString *_tabKeyword;
    NSString *_startDate;
    NSString *_endDate;
}

@property(copy, nonatomic) NSString *endDate; // @synthesize endDate=_endDate;
@property(copy, nonatomic) NSString *startDate; // @synthesize startDate=_startDate;
@property(copy, nonatomic) NSString *tabKeyword; // @synthesize tabKeyword=_tabKeyword;
@property(copy, nonatomic) NSString *sort; // @synthesize sort=_sort;
@property(copy, nonatomic) NSString *nameTaiwan; // @synthesize nameTaiwan=_nameTaiwan;
@property(copy, nonatomic) NSString *nameEnglish; // @synthesize nameEnglish=_nameEnglish;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long long category; // @synthesize category=_category;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) long long tabID; // @synthesize tabID=_tabID;
- (void).cxx_destruct;
- (_Bool)updateWithDictionary:(id)arg1;

@end

