//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;
@protocol OS_dispatch_io, OS_dispatch_queue;

@interface TWTRMultipartFormDocument : NSObject
{
    NSString *_boundary;
    NSString *_contentTypeHeaderField;
    NSObject<OS_dispatch_io> *_writeChannel;
    NSObject<OS_dispatch_queue> *_serialIOHandlerQueue;
    NSArray *_formElements;
}

@property(readonly, nonatomic) NSArray *formElements; // @synthesize formElements=_formElements;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *serialIOHandlerQueue; // @synthesize serialIOHandlerQueue=_serialIOHandlerQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_io> *writeChannel; // @synthesize writeChannel=_writeChannel;
@property(readonly, copy, nonatomic) NSString *contentTypeHeaderField; // @synthesize contentTypeHeaderField=_contentTypeHeaderField;
@property(readonly, copy, nonatomic) NSString *boundary; // @synthesize boundary=_boundary;
- (void).cxx_destruct;
- (id)documentData;
- (void)loadBodyDataWithCallbackQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithFormElements:(id)arg1;
- (id)init;

@end

