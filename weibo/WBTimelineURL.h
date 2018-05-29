//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBModelObject.h"

@class NSArray, NSDictionary, NSString;

@interface WBTimelineURL : WBModelObject
{
    _Bool _isSafe;
    _Bool _hidden;
    _Bool _serverObjectNeedsUpdate;
    _Bool _isLocal;
    NSString *shortUrl;
    NSString *nativeUrl;
    NSString *pageId;
    NSString *pageTitle;
    NSString *urlType;
    NSString *scheme;
    NSString *urlTypeImageURL;
    NSString *localIconImageName;
    NSString *log;
    NSDictionary *logParams;
    NSArray *pictures;
    NSString *urlSuffix;
    NSDictionary *calendarDict;
    NSString *_statisticsType;
}

+ (_Bool)isValidForDictionary:(id)arg1;
+ (id)health_timelineURLsFromShareText:(id)arg1;
@property(nonatomic) _Bool isLocal; // @synthesize isLocal=_isLocal;
@property(readonly, nonatomic) _Bool serverObjectNeedsUpdate; // @synthesize serverObjectNeedsUpdate=_serverObjectNeedsUpdate;
@property(retain, nonatomic) NSString *statisticsType; // @synthesize statisticsType=_statisticsType;
@property(nonatomic) _Bool hidden; // @synthesize hidden=_hidden;
@property(nonatomic) _Bool isSafe; // @synthesize isSafe=_isSafe;
@property(retain, nonatomic) NSDictionary *calendarDict; // @synthesize calendarDict;
@property(retain, nonatomic) NSString *urlSuffix; // @synthesize urlSuffix;
@property(retain, nonatomic) NSArray *pictures; // @synthesize pictures;
@property(retain, nonatomic) NSDictionary *logParams; // @synthesize logParams;
@property(retain, nonatomic) NSString *log; // @synthesize log;
@property(retain, nonatomic) NSString *localIconImageName; // @synthesize localIconImageName;
@property(retain, nonatomic) NSString *urlTypeImageURL; // @synthesize urlTypeImageURL;
@property(retain, nonatomic) NSString *scheme; // @synthesize scheme;
@property(retain, nonatomic) NSString *urlType; // @synthesize urlType;
@property(retain, nonatomic) NSString *pageTitle; // @synthesize pageTitle;
@property(retain, nonatomic) NSString *pageId; // @synthesize pageId;
@property(retain, nonatomic) NSString *nativeUrl; // @synthesize nativeUrl;
@property(retain, nonatomic) NSString *shortUrl; // @synthesize shortUrl;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)validUrlTypeImageURL;
- (id)pasteboardRepresentation;
- (id)convertPicturesToDict:(id)arg1;
- (id)getPictures:(id)arg1 picInfos:(id)arg2;
- (id)dictionaryWithValues;
- (_Bool)updateWithJSONDictionary:(id)arg1;
- (void)dealloc;
- (id)openSDKAppParams;
- (id)openSDKAppScheme;
@property(retain, nonatomic) NSArray *flavoredRanges;

@end

