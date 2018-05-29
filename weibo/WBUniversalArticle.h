//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBBaseArticle.h"

@class ArticlePragraphedHtmlStringBuilder, NSArray, NSDate, NSDictionary, NSString, WBArticleCopyrighInfo, WBArticleInteractUserInfo, WBArticleRecommendFlowInfo, WBArticleRewardButtonInfo, WBPageCard;

@interface WBUniversalArticle : WBBaseArticle
{
    _Bool _claimEnable;
    NSDate *_createAt;
    NSString *_content;
    long long _isPay;
    long long _isReward;
    NSString *_payContent;
    NSArray *_writers;
    NSArray *_articleCards;
    NSString *_background;
    NSString *_theme;
    NSString *_readCount;
    WBArticleCopyrighInfo *_copyrightInfo;
    WBArticleRewardButtonInfo *_rewardButtonInfo;
    NSString *_recommendScheme;
    NSDictionary *_picMap;
    NSArray *_pictures;
    NSArray *_shareType;
    NSArray *_sharePosition;
    NSString *_payScheme;
    NSString *_extContent;
    NSString *_attractPayText;
    NSString *_originalUrl;
    NSString *_articleFingerprinting;
    NSArray *_pragraphModelsArray;
    NSArray *_pragraphPayModelArray;
    double _articleContentTotalHeight;
    NSArray *_noNeedPayPictures;
    NSArray *_needPayPictures;
    double _readableScale;
    long long _isFollowToRead;
    long long _isAuthorFollowed;
    long long _articleSource;
    NSDictionary *_followToReadCardDictionary;
    WBPageCard *_followToReadCard;
    long long _isExpandToRead;
    NSString *_expandToReadDesc;
    WBArticleInteractUserInfo *_articleInteractUserInfo;
    WBArticleRecommendFlowInfo *_articleRecommendFlowInfo;
    NSString *_claimScheme;
    NSString *_payInfoText;
    NSString *_buttonText;
}

+ (_Bool)updateArticleAttractPayText:(id)arg1 attractPayText:(id)arg2 fromDB:(id)arg3;
+ (_Bool)updateArticleExtraProperties:(id)arg1 article:(id)arg2 fromDB:(id)arg3;
+ (_Bool)updateArticlePaySchemeByArticleId:(id)arg1 articlePayScheme:(id)arg2 fromDB:(id)arg3;
+ (_Bool)updateArticleFingerprintingByArticleId:(id)arg1 articleFingerprinting:(id)arg2 fromDB:(id)arg3;
+ (_Bool)updateArticleSourceByArticleId:(id)arg1 articleSource:(long long)arg2 fromDB:(id)arg3;
+ (_Bool)updateIsAuthorFollowedByArticleId:(id)arg1 isAuthorFollowed:(long long)arg2 fromDB:(id)arg3;
+ (_Bool)updateIsFollowToReadByArticleId:(id)arg1 isFollowToRead:(long long)arg2 fromDB:(id)arg3;
+ (_Bool)updateReadableScaleByArticleId:(id)arg1 readableScale:(double)arg2 fromDB:(id)arg3;
+ (_Bool)updateReadCountByArticleId:(id)arg1 readCount:(id)arg2 fromDB:(id)arg3;
+ (_Bool)updateArticleContentTotalHeightByArticleId:(id)arg1 articleContentTotalHeight:(double)arg2 fromDB:(id)arg3;
+ (_Bool)updatePayPragraphModelsByArticleId:(id)arg1 pragraphPayModelsArray:(id)arg2 articleContentTotalHeight:(double)arg3 needPayPictures:(id)arg4 fromDB:(id)arg5;
+ (_Bool)updatePragraphModelsByArticleId:(id)arg1 pragraphModelsArray:(id)arg2 articleContentTotalHeight:(double)arg3 noNeedPayPictures:(id)arg4 isAuthorFollowed:(long long)arg5 fromDB:(id)arg6;
+ (id)getArticleOfArticleId:(id)arg1 fromDB:(id)arg2;
+ (id)getArticleArrayOfarticleIds:(id)arg1 fromDB:(id)arg2;
+ (void)insertArticleJSONDictionary:(id)arg1 intoDB:(id)arg2;
+ (void)addCommonObjectsWithArticle:(id)arg1 toDictionary:(id)arg2;
+ (id)extraPropertiesFromArticle:(id)arg1;
+ (id)toJSONDictionary:(id)arg1;
+ (id)tableName;
+ (_Bool)isValidForDictionary:(id)arg1;
+ (id)pragraphHtmlStringQueue;
+ (id)sharedQueue;
@property(copy, nonatomic) NSString *buttonText; // @synthesize buttonText=_buttonText;
@property(copy, nonatomic) NSString *payInfoText; // @synthesize payInfoText=_payInfoText;
@property(retain, nonatomic) NSString *claimScheme; // @synthesize claimScheme=_claimScheme;
@property(nonatomic) _Bool claimEnable; // @synthesize claimEnable=_claimEnable;
@property(retain, nonatomic) WBArticleRecommendFlowInfo *articleRecommendFlowInfo; // @synthesize articleRecommendFlowInfo=_articleRecommendFlowInfo;
@property(retain, nonatomic) WBArticleInteractUserInfo *articleInteractUserInfo; // @synthesize articleInteractUserInfo=_articleInteractUserInfo;
@property(copy, nonatomic) NSString *expandToReadDesc; // @synthesize expandToReadDesc=_expandToReadDesc;
@property(nonatomic) long long isExpandToRead; // @synthesize isExpandToRead=_isExpandToRead;
@property(retain, nonatomic) WBPageCard *followToReadCard; // @synthesize followToReadCard=_followToReadCard;
@property(retain, nonatomic) NSDictionary *followToReadCardDictionary; // @synthesize followToReadCardDictionary=_followToReadCardDictionary;
@property(nonatomic) long long articleSource; // @synthesize articleSource=_articleSource;
@property(nonatomic) long long isAuthorFollowed; // @synthesize isAuthorFollowed=_isAuthorFollowed;
@property(nonatomic) long long isFollowToRead; // @synthesize isFollowToRead=_isFollowToRead;
@property(nonatomic) double readableScale; // @synthesize readableScale=_readableScale;
@property(retain, nonatomic) NSArray *needPayPictures; // @synthesize needPayPictures=_needPayPictures;
@property(retain, nonatomic) NSArray *noNeedPayPictures; // @synthesize noNeedPayPictures=_noNeedPayPictures;
@property double articleContentTotalHeight; // @synthesize articleContentTotalHeight=_articleContentTotalHeight;
@property(retain, nonatomic) NSArray *pragraphPayModelArray; // @synthesize pragraphPayModelArray=_pragraphPayModelArray;
@property(retain, nonatomic) NSArray *pragraphModelsArray; // @synthesize pragraphModelsArray=_pragraphModelsArray;
@property(copy, nonatomic) NSString *articleFingerprinting; // @synthesize articleFingerprinting=_articleFingerprinting;
@property(copy, nonatomic) NSString *originalUrl; // @synthesize originalUrl=_originalUrl;
@property(retain, nonatomic) NSString *attractPayText; // @synthesize attractPayText=_attractPayText;
@property(retain, nonatomic) NSString *extContent; // @synthesize extContent=_extContent;
@property(retain, nonatomic) NSString *payScheme; // @synthesize payScheme=_payScheme;
@property(retain, nonatomic) NSArray *sharePosition; // @synthesize sharePosition=_sharePosition;
@property(retain, nonatomic) NSArray *shareType; // @synthesize shareType=_shareType;
@property(retain, nonatomic) NSArray *pictures; // @synthesize pictures=_pictures;
@property(retain, nonatomic) NSDictionary *picMap; // @synthesize picMap=_picMap;
@property(retain, nonatomic) NSString *recommendScheme; // @synthesize recommendScheme=_recommendScheme;
@property(retain, nonatomic) WBArticleRewardButtonInfo *rewardButtonInfo; // @synthesize rewardButtonInfo=_rewardButtonInfo;
@property(retain, nonatomic) WBArticleCopyrighInfo *copyrightInfo; // @synthesize copyrightInfo=_copyrightInfo;
@property(retain, nonatomic) NSString *readCount; // @synthesize readCount=_readCount;
@property(retain, nonatomic) NSString *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) NSString *background; // @synthesize background=_background;
@property(retain, nonatomic) NSArray *articleCards; // @synthesize articleCards=_articleCards;
@property(retain, nonatomic) NSArray *writers; // @synthesize writers=_writers;
@property(retain, nonatomic) NSString *payContent; // @synthesize payContent=_payContent;
@property(nonatomic) long long isReward; // @synthesize isReward=_isReward;
@property(nonatomic) long long isPay; // @synthesize isPay=_isPay;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSDate *createAt; // @synthesize createAt=_createAt;
- (void).cxx_destruct;
- (void)loadFromRS:(id)arg1 andDB:(id)arg2;
- (id)toJSONDictionary;
- (id)primaryKey;
- (_Bool)updateWithJSONDictionary:(id)arg1;
- (void)buildConvienceTempObject;
- (_Bool)updateWithDictionary:(id)arg1;
- (_Bool)isContentEmpty;
- (_Bool)resetDrawingContextForPragraphModelsArray:(id)arg1;
- (void)resetArticleAssociateValues;
- (void)preparePragraphBuilderForPayContentWithUserInfo:(id)arg1 finishPayed:(_Bool)arg2 pragraphedCompleteBlock:(CDUnknownBlockType)arg3;
- (void)_preparePragraphBuilderForTextContent:(id)arg1 userInfo:(id)arg2 pragraphedCompleteBlock:(CDUnknownBlockType)arg3;
- (void)_updateArticleContentTotalHeightByPragraphedHtmlStringBuilder:(id)arg1;
- (void)preparePragraphBuilderForExtContentWithUserInfo:(id)arg1 pragraphedCompleteBlock:(CDUnknownBlockType)arg2;
- (void)preparePragraphBuilderForContentWithUserInfo:(id)arg1 pragraphedCompleteBlock:(CDUnknownBlockType)arg2;
@property(nonatomic) double articleContentWidth;
@property(retain, nonatomic) ArticlePragraphedHtmlStringBuilder *pragraphedHtmlStringBuilder; // @dynamic pragraphedHtmlStringBuilder;
- (void)_prepareDrawingContextByPragraphModel:(id)arg1;
- (void)preparePragraphBuilderWithUserInfo:(id)arg1 pragraphedCompleteBlock:(CDUnknownBlockType)arg2;

@end

