//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTEntityBase.h"

@class NSArray, NSMutableSet, NSString;

@interface TTHistoryEntryGroup : TTEntityBase
{
    _Bool _isDeleting;
    _Bool _isEntireDeleting;
    NSString *_primaryKey;
    long long _dateIdentifier;
    NSString *_headerText;
    long long _totalCount;
    NSArray *_orderedDataList;
    NSMutableSet *_excludeItems;
    NSMutableSet *_deletingItems;
}

+ (id)insertObjectsWithDataArray:(id)arg1;
+ (id)objectWithDictionary:(id)arg1;
+ (id)persistentProperties;
+ (id)primaryKey;
+ (id)dbName;
@property(retain, nonatomic) NSMutableSet *deletingItems; // @synthesize deletingItems=_deletingItems;
@property(retain, nonatomic) NSMutableSet *excludeItems; // @synthesize excludeItems=_excludeItems;
@property(nonatomic) _Bool isEntireDeleting; // @synthesize isEntireDeleting=_isEntireDeleting;
@property(nonatomic) _Bool isDeleting; // @synthesize isDeleting=_isDeleting;
@property(retain, nonatomic) NSArray *orderedDataList; // @synthesize orderedDataList=_orderedDataList;
@property(nonatomic) long long totalCount; // @synthesize totalCount=_totalCount;
@property(retain, nonatomic) NSString *headerText; // @synthesize headerText=_headerText;
@property(nonatomic) long long dateIdentifier; // @synthesize dateIdentifier=_dateIdentifier;
@property(retain, nonatomic) NSString *primaryKey; // @synthesize primaryKey=_primaryKey;
- (void).cxx_destruct;
- (void)save;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;

@end
