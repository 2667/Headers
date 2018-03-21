//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APDAOElement.h"

@class APDAOText, NSString;

@interface APDAOForeach : APDAOElement
{
    _Bool _reverse;
    _Bool _commonBindModel;
    NSString *_item;
    NSString *_collection;
    NSString *_open;
    NSString *_separator;
    NSString *_close;
    APDAOText *_text;
}

@property(nonatomic) _Bool commonBindModel; // @synthesize commonBindModel=_commonBindModel;
@property(nonatomic) _Bool reverse; // @synthesize reverse=_reverse;
@property(retain, nonatomic) APDAOText *text; // @synthesize text=_text;
@property(retain, nonatomic) NSString *close; // @synthesize close=_close;
@property(retain, nonatomic) NSString *separator; // @synthesize separator=_separator;
@property(retain, nonatomic) NSString *open; // @synthesize open=_open;
@property(retain, nonatomic) NSString *collection; // @synthesize collection=_collection;
@property(retain, nonatomic) NSString *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (id)initWithXML:(id)arg1;

@end
