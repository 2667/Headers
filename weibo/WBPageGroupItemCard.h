//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBPageCard.h"

@class NSArray, NSDictionary, NSString;

@interface WBPageGroupItemCard : WBPageCard
{
    _Bool _isMoreItem;
    int titleSubColor;
    NSString *titleSub;
    NSString *pic;
    NSString *icon;
    NSArray *buttonModels;
    NSString *cellHightlightedColor;
    NSString *titleColor;
    NSString *descColor;
    NSString *_itemTitle;
    NSString *_itemDesc;
    NSString *_itemLeftTitle;
    NSDictionary *_actionLog;
    NSString *_leftTitleColor;
    NSArray *_descContentStruct;
    NSString *_badgeText;
    long long _itemPotionType;
}

+ (id)groupItemFromDictionary:(id)arg1;
+ (id)groupItemFromArray:(id)arg1;
@property(nonatomic) long long itemPotionType; // @synthesize itemPotionType=_itemPotionType;
@property(copy, nonatomic) NSString *badgeText; // @synthesize badgeText=_badgeText;
@property(nonatomic) _Bool isMoreItem; // @synthesize isMoreItem=_isMoreItem;
@property(retain, nonatomic) NSArray *descContentStruct; // @synthesize descContentStruct=_descContentStruct;
@property(retain, nonatomic) NSString *leftTitleColor; // @synthesize leftTitleColor=_leftTitleColor;
@property(copy, nonatomic) NSDictionary *actionLog; // @synthesize actionLog=_actionLog;
@property(copy, nonatomic) NSString *itemLeftTitle; // @synthesize itemLeftTitle=_itemLeftTitle;
@property(copy, nonatomic) NSString *itemDesc; // @synthesize itemDesc=_itemDesc;
@property(copy, nonatomic) NSString *itemTitle; // @synthesize itemTitle=_itemTitle;
@property(retain, nonatomic) NSString *descColor; // @synthesize descColor;
@property(retain, nonatomic) NSString *titleColor; // @synthesize titleColor;
@property(retain, nonatomic) NSString *cellHightlightedColor; // @synthesize cellHightlightedColor;
@property(retain, nonatomic) NSArray *buttonModels; // @synthesize buttonModels;
@property int titleSubColor; // @synthesize titleSubColor;
@property(retain, nonatomic) NSString *icon; // @synthesize icon;
@property(retain, nonatomic) NSString *pic; // @synthesize pic;
@property(retain, nonatomic) NSString *titleSub; // @synthesize titleSub;
- (void).cxx_destruct;
- (_Bool)updateWithDictionary:(id)arg1;
- (void)dealloc;

@end

