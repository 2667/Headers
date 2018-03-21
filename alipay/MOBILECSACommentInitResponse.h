//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MOBILECSABaseRpcResponse.h"

@class NSArray, NSString;

@interface MOBILECSACommentInitResponse : MOBILECSABaseRpcResponse
{
    _Bool _haveDisplayGoods;
    _Bool _haveCraftsmans;
    _Bool _shareLifeCircle;
    _Bool _shareItem;
    _Bool _shareOrderAmount;
    int _pageSize;
    int _defaultScore;
    int _version;
    NSArray *_tagDetails;
    NSString *_shopId;
    NSString *_shopName;
    NSString *_shopLogo;
    NSString *_itemId;
    NSString *_lastTagMd5;
    NSString *_commentInitContent;
    NSString *_displayGoodsTotal;
    NSString *_activityTitle;
    NSString *_activityUrl;
    NSString *_activityContentTitle;
    NSString *_activityContent;
    NSString *_faceDefaultDesc;
    NSArray *_faceDescs;
    NSArray *_questions;
    NSArray *_starDescs;
    NSArray *_subScore;
    NSArray *_subScoreObject;
    NSString *_defaultCraftsmanId;
    NSString *_defaultCraftsmanName;
    NSArray *_itemInfoList;
    NSString *_shareOrderAmountTip;
}

+ (Class)itemInfoListElementClass;
+ (Class)subScoreObjectElementClass;
+ (Class)subScoreElementClass;
+ (Class)starDescsElementClass;
+ (Class)questionsElementClass;
+ (Class)faceDescsElementClass;
+ (Class)tagDetailsElementClass;
@property(retain, nonatomic) NSString *shareOrderAmountTip; // @synthesize shareOrderAmountTip=_shareOrderAmountTip;
@property(nonatomic) _Bool shareOrderAmount; // @synthesize shareOrderAmount=_shareOrderAmount;
@property(nonatomic) _Bool shareItem; // @synthesize shareItem=_shareItem;
@property(nonatomic) _Bool shareLifeCircle; // @synthesize shareLifeCircle=_shareLifeCircle;
@property(retain, nonatomic) NSArray *itemInfoList; // @synthesize itemInfoList=_itemInfoList;
@property(retain, nonatomic) NSString *defaultCraftsmanName; // @synthesize defaultCraftsmanName=_defaultCraftsmanName;
@property(retain, nonatomic) NSString *defaultCraftsmanId; // @synthesize defaultCraftsmanId=_defaultCraftsmanId;
@property(nonatomic) _Bool haveCraftsmans; // @synthesize haveCraftsmans=_haveCraftsmans;
@property(retain, nonatomic) NSArray *subScoreObject; // @synthesize subScoreObject=_subScoreObject;
@property(retain, nonatomic) NSArray *subScore; // @synthesize subScore=_subScore;
@property(retain, nonatomic) NSArray *starDescs; // @synthesize starDescs=_starDescs;
@property(retain, nonatomic) NSArray *questions; // @synthesize questions=_questions;
@property(retain, nonatomic) NSArray *faceDescs; // @synthesize faceDescs=_faceDescs;
@property(nonatomic) int version; // @synthesize version=_version;
@property(retain, nonatomic) NSString *faceDefaultDesc; // @synthesize faceDefaultDesc=_faceDefaultDesc;
@property(retain, nonatomic) NSString *activityContent; // @synthesize activityContent=_activityContent;
@property(retain, nonatomic) NSString *activityContentTitle; // @synthesize activityContentTitle=_activityContentTitle;
@property(retain, nonatomic) NSString *activityUrl; // @synthesize activityUrl=_activityUrl;
@property(retain, nonatomic) NSString *activityTitle; // @synthesize activityTitle=_activityTitle;
@property(retain, nonatomic) NSString *displayGoodsTotal; // @synthesize displayGoodsTotal=_displayGoodsTotal;
@property(nonatomic) int defaultScore; // @synthesize defaultScore=_defaultScore;
@property(nonatomic) _Bool haveDisplayGoods; // @synthesize haveDisplayGoods=_haveDisplayGoods;
@property(retain, nonatomic) NSString *commentInitContent; // @synthesize commentInitContent=_commentInitContent;
@property(nonatomic) int pageSize; // @synthesize pageSize=_pageSize;
@property(retain, nonatomic) NSString *lastTagMd5; // @synthesize lastTagMd5=_lastTagMd5;
@property(retain, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
@property(retain, nonatomic) NSString *shopLogo; // @synthesize shopLogo=_shopLogo;
@property(retain, nonatomic) NSString *shopName; // @synthesize shopName=_shopName;
@property(retain, nonatomic) NSString *shopId; // @synthesize shopId=_shopId;
@property(retain, nonatomic) NSArray *tagDetails; // @synthesize tagDetails=_tagDetails;
- (void).cxx_destruct;

@end
