//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSArray, NSNumber;
@protocol Optional, TTIMHttpMessageModel><Optional;

@interface TTIMHttpLoadMoreMessageResponseModel : JSONModel
{
    NSArray<TTIMHttpMessageModel><Optional> *_messageArray;
    NSNumber<Optional> *_count;
    NSNumber<Optional> *_hasMore;
    NSNumber<Optional> *_errorCode;
}

+ (id)keyMapper;
@property(retain, nonatomic) NSNumber<Optional> *errorCode; // @synthesize errorCode=_errorCode;
@property(retain, nonatomic) NSNumber<Optional> *hasMore; // @synthesize hasMore=_hasMore;
@property(retain, nonatomic) NSNumber<Optional> *count; // @synthesize count=_count;
@property(retain, nonatomic) NSArray<TTIMHttpMessageModel><Optional> *messageArray; // @synthesize messageArray=_messageArray;
- (void).cxx_destruct;
- (id)transformToPBModel;

@end

