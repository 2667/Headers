//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSError, NSHTTPURLResponse, NSMutableData, NSURLResponse;

@interface LVHttpResponse : NSObject
{
    NSURLResponse *_response;
    NSHTTPURLResponse *_httpResponse;
    NSMutableData *_data;
    NSError *_error;
}

@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSMutableData *data; // @synthesize data=_data;
@property(retain, nonatomic) NSHTTPURLResponse *httpResponse; // @synthesize httpResponse=_httpResponse;
@property(retain, nonatomic) NSURLResponse *response; // @synthesize response=_response;
- (void).cxx_destruct;

@end
