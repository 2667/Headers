//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface TBLiveMillionBabyQAQuestionModel : NSObject
{
    _Bool _isOut;
    _Bool _canUnlimit;
    long long _intoEffect;
    long long _sequence;
    long long _submitEndTime;
    long long _time2FetchSubject;
    long long _time2InvalidateSEI;
    long long _CDNCurrentTime;
    long long _answerLength;
    NSString *_content;
    NSString *_unifiedEncryptedContent;
    NSString *_atmosphereUrl;
    NSString *_title;
    NSArray *_options;
    NSString *_pardonCardCount;
}

+ (id)modelWithJSONDictionary:(id)arg1;
@property(nonatomic) _Bool canUnlimit; // @synthesize canUnlimit=_canUnlimit;
@property(copy, nonatomic) NSString *pardonCardCount; // @synthesize pardonCardCount=_pardonCardCount;
@property(nonatomic) _Bool isOut; // @synthesize isOut=_isOut;
@property(retain, nonatomic) NSArray *options; // @synthesize options=_options;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *atmosphereUrl; // @synthesize atmosphereUrl=_atmosphereUrl;
@property(copy, nonatomic) NSString *unifiedEncryptedContent; // @synthesize unifiedEncryptedContent=_unifiedEncryptedContent;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(nonatomic) long long answerLength; // @synthesize answerLength=_answerLength;
@property(nonatomic) long long CDNCurrentTime; // @synthesize CDNCurrentTime=_CDNCurrentTime;
@property(nonatomic) long long time2InvalidateSEI; // @synthesize time2InvalidateSEI=_time2InvalidateSEI;
@property(nonatomic) long long time2FetchSubject; // @synthesize time2FetchSubject=_time2FetchSubject;
@property(nonatomic) long long submitEndTime; // @synthesize submitEndTime=_submitEndTime;
@property(nonatomic) long long sequence; // @synthesize sequence=_sequence;
@property(nonatomic) long long intoEffect; // @synthesize intoEffect=_intoEffect;
- (void).cxx_destruct;

@end

