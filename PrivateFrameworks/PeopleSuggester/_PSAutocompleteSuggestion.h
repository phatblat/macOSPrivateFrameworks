//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSArray, NSString;

@interface _PSAutocompleteSuggestion : NSObject <NSSecureCoding>
{
    NSString *_chatGuid;
    NSArray *_chatHandles;
    NSString *_displayName;
    NSString *_handle;
    NSString *_contactIdentifier;
    unsigned long long _resultSourceType;
    NSArray *_recipients;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSArray *recipients; // @synthesize recipients=_recipients;
@property(nonatomic) unsigned long long resultSourceType; // @synthesize resultSourceType=_resultSourceType;
@property(readonly, copy, nonatomic) NSString *contactIdentifier; // @synthesize contactIdentifier=_contactIdentifier;
@property(readonly, copy, nonatomic) NSString *handle; // @synthesize handle=_handle;
@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, copy, nonatomic) NSArray *chatHandles; // @synthesize chatHandles=_chatHandles;
@property(readonly, copy, nonatomic) NSString *chatGuid; // @synthesize chatGuid=_chatGuid;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithChatGuid:(id)arg1 chatHandles:(id)arg2 displayName:(id)arg3 handle:(id)arg4 contactIdentifier:(id)arg5 resultSourceType:(unsigned long long)arg6 autocompleteResult:(id)arg7 recipients:(id)arg8;
- (id)initWithChatGuid:(id)arg1 chatHandles:(id)arg2 displayName:(id)arg3 handle:(id)arg4 contactIdentifier:(id)arg5 resultSourceType:(unsigned long long)arg6 autocompleteResult:(id)arg7;
- (id)initWithChatGuid:(id)arg1 displayName:(id)arg2 handle:(id)arg3 contactIdentifier:(id)arg4 resultSourceType:(unsigned long long)arg5 autocompleteResult:(id)arg6;

@end
