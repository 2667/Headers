//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBRecmdCardBaseModel.h"

@class NSArray, NSString, TBRecmdMoneyComponent, TBRecmdPicComponent, TBRecmdRichTextComponent, TBRecmdTipComponent;
@protocol TBRecmdTextComponent;

@interface TBRecmdItemCardModel : TBRecmdCardBaseModel
{
    TBRecmdPicComponent *_masterPic;
    TBRecmdRichTextComponent *_desc;
    TBRecmdTipComponent *_bottomTip;
    TBRecmdRichTextComponent *_desc2;
    TBRecmdTipComponent *_picTip;
    TBRecmdMoneyComponent *_price;
    TBRecmdRichTextComponent *_title;
    TBRecmdPicComponent *_itemImg;
    NSArray<TBRecmdTextComponent> *_labelList;
    NSString *_itemId;
    NSString *_sku;
    NSString *_scm;
}

+ (id)factoryKey;
@property(retain, nonatomic) NSString *scm; // @synthesize scm=_scm;
@property(retain, nonatomic) NSString *sku; // @synthesize sku=_sku;
@property(retain, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
@property(retain, nonatomic) NSArray<TBRecmdTextComponent> *labelList; // @synthesize labelList=_labelList;
@property(retain, nonatomic) TBRecmdPicComponent *itemImg; // @synthesize itemImg=_itemImg;
@property(retain, nonatomic) TBRecmdRichTextComponent *title; // @synthesize title=_title;
@property(retain, nonatomic) TBRecmdMoneyComponent *price; // @synthesize price=_price;
@property(retain, nonatomic) TBRecmdTipComponent *picTip; // @synthesize picTip=_picTip;
@property(retain, nonatomic) TBRecmdRichTextComponent *desc2; // @synthesize desc2=_desc2;
@property(retain, nonatomic) TBRecmdTipComponent *bottomTip; // @synthesize bottomTip=_bottomTip;
@property(retain, nonatomic) TBRecmdRichTextComponent *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) TBRecmdPicComponent *masterPic; // @synthesize masterPic=_masterPic;
- (void).cxx_destruct;
- (id)accessibilityLabel;
- (id)iconLabelStrAtIndex:(long long)arg1;
- (id)desc2Str;
- (id)descStr;
- (id)salesStr;
- (id)priceAttributedStr;
- (id)titleStr;
- (id)iconURL;
- (_Bool)hasIcon;
- (id)itemImgURL;

@end

