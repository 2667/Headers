//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, TBRateResponse;

@interface TBRateResult : NSObject
{
    TBRateResponse *response;
    NSString *responseString;
    id _responseJSON;
}

@property(retain) id responseJSON; // @synthesize responseJSON=_responseJSON;
@property(retain) NSString *responseString; // @synthesize responseString;
@property(retain) TBRateResponse *response; // @synthesize response;
- (void).cxx_destruct;
- (_Bool)isFlowControl;
- (id)displayError;
- (id)init;

@end
