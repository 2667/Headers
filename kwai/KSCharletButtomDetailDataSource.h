//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UICollectionViewDataSource-Protocol.h"

@class KSChartletToolItem, NSArray, NSMutableArray, NSString, UICollectionView;

@interface KSCharletButtomDetailDataSource : NSObject <UICollectionViewDataSource>
{
    NSMutableArray *_hotShapes;
    NSMutableArray *_hotChartlets;
    NSArray *_textItems;
    _Bool _needSaveHotShapes;
    _Bool _needSaveHotChartlets;
    _Bool _showAllTextItems;
    UICollectionView *_collectionView;
    unsigned long long _type;
    NSArray *_words;
    KSChartletToolItem *_textCopyItem;
    KSChartletToolItem *_textMoreItem;
    NSArray *_allTextBanners;
    NSArray *_allPlainBanners;
    NSArray *_charlets;
    NSArray *_dateChartlets;
}

+ (void)migrateOldConfigFiles;
@property(retain, nonatomic) NSArray *dateChartlets; // @synthesize dateChartlets=_dateChartlets;
@property(readonly, nonatomic) NSArray *charlets; // @synthesize charlets=_charlets;
@property(nonatomic) _Bool showAllTextItems; // @synthesize showAllTextItems=_showAllTextItems;
@property(retain, nonatomic) NSArray *allPlainBanners; // @synthesize allPlainBanners=_allPlainBanners;
@property(retain, nonatomic) NSArray *allTextBanners; // @synthesize allTextBanners=_allTextBanners;
@property(readonly, nonatomic) KSChartletToolItem *textMoreItem; // @synthesize textMoreItem=_textMoreItem;
@property(readonly, nonatomic) KSChartletToolItem *textCopyItem; // @synthesize textCopyItem=_textCopyItem;
@property(readonly, nonatomic) NSArray *words; // @synthesize words=_words;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) __weak UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)items;
- (void)loadLocationChartlets;
- (void)loadChartlets;
- (void)loadTextItems;
- (id)textItemWithIconName:(id)arg1 type:(long long)arg2 backgroundColor:(id)arg3;
- (id)init;
- (void)dealloc;
- (id)reorderShapes:(id)arg1 withPriorityList:(id)arg2;
- (void)addHotChartlet:(id)arg1;
- (void)addHotShape:(id)arg1;
- (void)saveHotShapesAndChartlets;
- (void)loadHotShapesAndChartlets;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

