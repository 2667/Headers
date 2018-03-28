//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class NSArray, NSString;

@interface AWEURLModel : MTLModel <MTLJSONSerializing>
{
    NSArray *URLList;
    NSString *_URI;
    NSArray *_originURLList;
}

+ (void)setShouldChangeCommonParamsBlock:(CDUnknownBlockType)arg1;
+ (void)setDidFinishInitBlock:(CDUnknownBlockType)arg1;
+ (id)URLString:(id)arg1 appendCommonParams:(id)arg2;
+ (id)commonParameters;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSArray *originURLList; // @synthesize originURLList=_originURLList;
@property(copy, nonatomic) NSString *URI; // @synthesize URI=_URI;
- (void).cxx_destruct;
- (id)JSONDictionaryWithoutCommonParameters;
- (id)getURLDict;
- (void)convertUrlListAddCommonParams;
- (id)recommendUrl;
@property(readonly, copy, nonatomic) NSArray *URLList; // @synthesize URLList;
- (id)initWithDict:(id)arg1;
- (id)init;
@property(copy, nonatomic) NSString *currentLanguage; // @dynamic currentLanguage;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

