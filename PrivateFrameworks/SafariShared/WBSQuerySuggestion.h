//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface WBSQuerySuggestion : NSObject
{
    NSString *_title;
    NSString *_identifier;
    long long _type;
    id _tag;
}

@property(readonly, nonatomic) id tag; // @synthesize tag=_tag;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)initWithTitle:(id)arg1 identifier:(id)arg2 type:(long long)arg3 tag:(id)arg4;
- (id)init;

@end

