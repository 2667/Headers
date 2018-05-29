//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBModelObject.h"

#import "WBDatabaseModel-Protocol.h"
#import "WBMediaAutoPlayProviderDataModel-Protocol.h"

@class NSArray, NSDate, NSDictionary, NSString;
@protocol WBMediaAutoPlayProviderDataModel;

@interface WBTimelineTrendItem : WBModelObject <WBMediaAutoPlayProviderDataModel, WBDatabaseModel>
{
    _Bool hasMore;
    _Bool hideBorder;
    _Bool _disableCache;
    _Bool _isNative;
    _Bool _showPagingIndicator;
    _Bool _shouldHiddenShadowView;
    _Bool _isContent;
    NSString *trendItemID;
    NSDate *date;
    NSString *type;
    NSString *trendOid;
    NSString *trendTitle;
    unsigned long long contentIndex;
    long long trendIndex;
    unsigned long long displayStyle;
    NSArray *menuModels;
    NSArray *cardDictionaries;
    NSString *apiType;
    NSString *trendExt;
    NSDictionary *extraStruct;
    long long position;
    NSDictionary *_titleInfos;
    NSArray *_bottomButtons;
    NSArray *_cards;
    NSDictionary *_moreInfos;
    double _itemHeight;
    long long _dataType;
    long long _userVersion;
    NSString *_imageURL;
    NSString *_imageScheme;
    NSDictionary *_titlesDict;
}

+ (void)hideShieldMblogWithTrend:(id)arg1;
+ (_Bool)isShieldMblogHidenOfTrend:(id)arg1;
+ (void)insertDictTrendItem:(id)arg1 intoDB:(id)arg2 type:(id)arg3 time:(double)arg4;
+ (void)deleteAllFromDB:(id)arg1 type:(id)arg2;
+ (void)deleteFromDB:(id)arg1 trendIDs:(id)arg2 type:(id)arg3;
+ (void)deleteFromDB:(id)arg1 trendID:(id)arg2 type:(id)arg3;
+ (void)deleteAllFromDB:(id)arg1 type:(id)arg2 maxIndex:(long long)arg3 minIndex:(long long)arg4;
@property(copy, nonatomic) NSDictionary *titlesDict; // @synthesize titlesDict=_titlesDict;
@property(copy, nonatomic) NSString *imageScheme; // @synthesize imageScheme=_imageScheme;
@property(copy, nonatomic) NSString *imageURL; // @synthesize imageURL=_imageURL;
@property(nonatomic) long long userVersion; // @synthesize userVersion=_userVersion;
@property(nonatomic) _Bool isContent; // @synthesize isContent=_isContent;
@property(nonatomic) _Bool shouldHiddenShadowView; // @synthesize shouldHiddenShadowView=_shouldHiddenShadowView;
@property(nonatomic) long long dataType; // @synthesize dataType=_dataType;
@property(nonatomic) _Bool showPagingIndicator; // @synthesize showPagingIndicator=_showPagingIndicator;
@property(readonly, nonatomic) double itemHeight; // @synthesize itemHeight=_itemHeight;
@property(nonatomic) _Bool isNative; // @synthesize isNative=_isNative;
@property(nonatomic) _Bool disableCache; // @synthesize disableCache=_disableCache;
@property(retain, nonatomic) NSDictionary *moreInfos; // @synthesize moreInfos=_moreInfos;
@property(copy, nonatomic) NSArray *cards; // @synthesize cards=_cards;
@property(retain, nonatomic) NSArray *bottomButtons; // @synthesize bottomButtons=_bottomButtons;
@property(retain, nonatomic) NSDictionary *titleInfos; // @synthesize titleInfos=_titleInfos;
@property(nonatomic) long long position; // @synthesize position;
@property(retain, nonatomic) NSDictionary *extraStruct; // @synthesize extraStruct;
@property(nonatomic) _Bool hideBorder; // @synthesize hideBorder;
@property(retain, nonatomic) NSString *trendExt; // @synthesize trendExt;
@property(retain, nonatomic) NSString *apiType; // @synthesize apiType;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore;
@property(retain, nonatomic) NSArray *cardDictionaries; // @synthesize cardDictionaries;
@property(retain, nonatomic) NSArray *menuModels; // @synthesize menuModels;
@property(nonatomic) unsigned long long displayStyle; // @synthesize displayStyle;
@property(nonatomic) long long trendIndex; // @synthesize trendIndex;
@property(nonatomic) unsigned long long contentIndex; // @synthesize contentIndex;
@property(retain, nonatomic) NSString *trendTitle; // @synthesize trendTitle;
@property(retain, nonatomic) NSString *trendOid; // @synthesize trendOid;
@property(retain, nonatomic) NSString *type; // @synthesize type;
@property(retain, nonatomic) NSDate *date; // @synthesize date;
@property(retain, nonatomic) NSString *trendItemID; // @synthesize trendItemID;
- (void).cxx_destruct;
- (void)saveToDBCard:(id)arg1 ByTrendID:(id)arg2;
- (long long)addTheNewCardDictionary:(id)arg1 ButtonModel:(id)arg2;
- (void)handledCommonButtonClicked:(id)arg1 index:(long long)arg2 model:(id)arg3;
- (void)commonButtonActionDidFinishedNotification:(id)arg1;
- (void)loadFromRS:(id)arg1 andDB:(id)arg2;
- (_Bool)isEqual:(id)arg1;
- (void)caculateItemHeightWithWidth:(double)arg1 tableView:(id)arg2;
- (_Bool)hasHeaderTitle;
@property(nonatomic) _Bool isValid;
- (void)dealloc;
- (id)convertToDict;
- (_Bool)updateWithDictionary:(id)arg1;
- (id)init;
- (id)gernerateTrendID;
- (id)ownAnalysisParameters;
- (id)featureCode;
- (void)didSelectRowOfTableView:(id)arg1 inViewController:(id)arg2;
- (id)reusableCellOfTableView:(id)arg1;
- (double)rowHeightOfTableView:(id)arg1;
- (Class)tableViewCellClass;
@property(readonly, nonatomic) id <WBMediaAutoPlayProviderDataModel> mediaAutoPlayQuotedItem;
@property(readonly, nonatomic) NSString *mediaAutoPlayItemID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

