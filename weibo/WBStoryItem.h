//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBModelObject.h"

@class NSArray, NSDictionary, NSMutableDictionary, NSString, WBStoryItemStyle, WBStoryUser;

@interface WBStoryItem : WBModelObject
{
    _Bool _hasSchemeSegment;
    _Bool _hasSegments;
    _Bool _shouldLoop;
    _Bool _blocked;
    _Bool _isEnvoy;
    _Bool _shouldShowFollowGuide;
    _Bool _subscribeAllow;
    long long _readState;
    NSString *_itemID;
    unsigned long long _type;
    long long _bizType;
    NSString *_adText;
    long long _aggreHeaderSyle;
    NSString *_scheme;
    WBStoryUser *_user;
    NSArray *_segments;
    NSArray *_ads;
    long long _cursorSegmentID;
    long long _schemeSegmentID;
    NSString *_featureCode;
    unsigned long long _sourceType;
    double _lastDetailLoadTime;
    unsigned long long _feedbackType;
    WBStoryItemStyle *_style;
    NSDictionary *_extensionForLog;
    unsigned long long _subscribeState;
    NSString *_expireTitle;
    NSDictionary *_requestParams;
    NSMutableDictionary *_logParams;
    NSString *_coverImageURL;
}

+ (id)SupportedStoryItemTypes;
+ (id)myLocalStoryItem;
+ (_Bool)isValidForDictionary:(id)arg1;
+ (id)itemWithSegmentDetail:(id)arg1;
@property(copy, nonatomic) NSString *coverImageURL; // @synthesize coverImageURL=_coverImageURL;
@property(copy, nonatomic) NSMutableDictionary *logParams; // @synthesize logParams=_logParams;
@property(copy, nonatomic) NSDictionary *requestParams; // @synthesize requestParams=_requestParams;
@property(copy, nonatomic) NSString *expireTitle; // @synthesize expireTitle=_expireTitle;
@property(nonatomic) unsigned long long subscribeState; // @synthesize subscribeState=_subscribeState;
@property(nonatomic) _Bool subscribeAllow; // @synthesize subscribeAllow=_subscribeAllow;
@property(nonatomic) _Bool shouldShowFollowGuide; // @synthesize shouldShowFollowGuide=_shouldShowFollowGuide;
@property(nonatomic) _Bool isEnvoy; // @synthesize isEnvoy=_isEnvoy;
@property(copy, nonatomic) NSDictionary *extensionForLog; // @synthesize extensionForLog=_extensionForLog;
@property(retain, nonatomic) WBStoryItemStyle *style; // @synthesize style=_style;
@property(nonatomic) _Bool blocked; // @synthesize blocked=_blocked;
@property(nonatomic) unsigned long long feedbackType; // @synthesize feedbackType=_feedbackType;
@property(nonatomic) double lastDetailLoadTime; // @synthesize lastDetailLoadTime=_lastDetailLoadTime;
@property(nonatomic) unsigned long long sourceType; // @synthesize sourceType=_sourceType;
@property(nonatomic) _Bool shouldLoop; // @synthesize shouldLoop=_shouldLoop;
@property(nonatomic) _Bool hasSegments; // @synthesize hasSegments=_hasSegments;
@property(copy, nonatomic) NSString *featureCode; // @synthesize featureCode=_featureCode;
@property(nonatomic) _Bool hasSchemeSegment; // @synthesize hasSchemeSegment=_hasSchemeSegment;
@property(nonatomic) long long schemeSegmentID; // @synthesize schemeSegmentID=_schemeSegmentID;
@property(nonatomic) long long cursorSegmentID; // @synthesize cursorSegmentID=_cursorSegmentID;
@property(retain, nonatomic) NSArray *ads; // @synthesize ads=_ads;
@property(retain, nonatomic) NSArray *segments; // @synthesize segments=_segments;
@property(retain, nonatomic) WBStoryUser *user; // @synthesize user=_user;
@property(retain, nonatomic) NSString *scheme; // @synthesize scheme=_scheme;
@property(nonatomic) long long aggreHeaderSyle; // @synthesize aggreHeaderSyle=_aggreHeaderSyle;
@property(copy, nonatomic) NSString *adText; // @synthesize adText=_adText;
@property(nonatomic) long long bizType; // @synthesize bizType=_bizType;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *itemID; // @synthesize itemID=_itemID;
- (void).cxx_destruct;
- (_Bool)treatAsFeedType;
- (_Bool)canPlayFullScreen;
- (_Bool)isStoryItemTypeValid;
- (_Bool)isPicResourceLoaded;
- (_Bool)shouldUpdateDetail;
- (_Bool)hasSegmentsCurrently;
- (_Bool)isDetailLoaded;
- (_Bool)canPopUpWithDecodedImage:(_Bool)arg1;
- (_Bool)canPopUp;
@property(nonatomic) long long readState; // @synthesize readState=_readState;
- (void)clearDuplicatedSegmentIfNeed;
- (_Bool)removeSegmentsForAuthor:(id)arg1;
- (_Bool)removeSegment:(id)arg1;
- (void)mergeWithMyItem:(id)arg1;
- (_Bool)appendSegment:(id)arg1;
- (_Bool)hasFailedSegment;
- (void)forceUpdateReadState:(long long)arg1 segmentID:(long long)arg2;
- (void)updateReadState:(long long)arg1 segmentID:(long long)arg2;
- (_Bool)isMyLocalItem;
- (_Bool)isMySegment:(id)arg1;
- (_Bool)isMYStoryItem;
- (_Bool)canDeleteComments;
- (_Bool)canSendMessageAfterFollow:(_Bool)arg1 segment:(id)arg2;
- (_Bool)canSendMessageAfterFollow:(id)arg1;
- (_Bool)canSendMessage:(id)arg1;
- (_Bool)canCommentAfterFollow:(_Bool)arg1 warningText:(id *)arg2 segment:(id)arg3;
- (_Bool)canCommentAfterFollow:(id *)arg1 segment:(id)arg2;
- (_Bool)canComment:(id *)arg1 segment:(id)arg2;
- (id)description;
- (id)latestSegment;
- (id)nextSegmentToPlay;
- (id)primaryKey;
- (id)localSegments;
- (void)updateSegments:(id)arg1;
- (_Bool)updateWithDictionary:(id)arg1;
- (id)init;
- (id)actionLogParametersForRequest:(_Bool)arg1;
- (id)actionLogParameters;
- (_Bool)hasFeedBackForProviderType:(long long)arg1 feedBackTitle:(id *)arg2;
- (id)feedBackTitleForProviderType:(long long)arg1;
- (void)postFeedBack:(_Bool)arg1 parameters:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)feedBackTitle;
- (_Bool)canShowSegmentInspector:(id)arg1;
- (_Bool)shouldShowAuthorView:(id)arg1;
- (_Bool)canShowAdText;
- (_Bool)shouldShowInProfileTip:(long long)arg1;
- (_Bool)shouldShowAuthorMoreStory:(id)arg1;
- (_Bool)canShareToFeed:(id)arg1;
- (_Bool)canDeleteSegment:(id)arg1;
- (_Bool)canShowStorySettings;
- (_Bool)canReportSegment:(id)arg1;
- (_Bool)canSaveSegment:(id)arg1;
- (_Bool)shouldShowFollowAuthorButton:(id)arg1;
- (_Bool)shouldShowFollowButton:(id)arg1;
- (_Bool)canShowRejection:(id)arg1;
- (_Bool)canShowAggreUnFollow;
- (_Bool)canShowEnvyOpration;
- (_Bool)shouldShowMoreButton:(id)arg1 providerType:(long long)arg2;
- (_Bool)shouldShowUserView;
- (_Bool)shouldShowTimeLabelWithSegment:(id)arg1;

@end

