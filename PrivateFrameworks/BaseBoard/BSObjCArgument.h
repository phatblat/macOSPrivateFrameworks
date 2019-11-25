//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BSDescriptionProviding.h"

@class NSArray, NSString;

@interface BSObjCArgument : NSObject <BSDescriptionProviding>
{
    NSString *_encoding;
    unsigned long long _size;
    BOOL _type;
    BOOL _onewayVoid;
    BOOL _plistObject;
    Class _objectClass;
    NSString *_structName;
    NSArray *_protocols;
    NSArray *_containedClasses;
    NSString *_name;
    long long _index;
}

+ (id)argumentWithSignature:(id)arg1 atIndex:(long long)arg2;
@property(readonly, nonatomic) unsigned long long size; // @synthesize size=_size;
@property(readonly, nonatomic, getter=isPlistObject) BOOL plistObject; // @synthesize plistObject=_plistObject;
@property(readonly, nonatomic, getter=isOnewayVoid) BOOL onewayVoid; // @synthesize onewayVoid=_onewayVoid;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, retain, nonatomic) NSArray *containedClasses; // @synthesize containedClasses=_containedClasses;
@property(readonly, copy, nonatomic) NSArray *protocols; // @synthesize protocols=_protocols;
@property(readonly, copy, nonatomic) NSString *structName; // @synthesize structName=_structName;
@property(readonly, retain, nonatomic) Class objectClass; // @synthesize objectClass=_objectClass;
@property(readonly, copy, nonatomic) NSString *encoding; // @synthesize encoding=_encoding;
@property(readonly, nonatomic) BOOL type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (id)_prettyTypeString;
@property(readonly, nonatomic, getter=isPointer) BOOL pointer;
@property(readonly, nonatomic, getter=isBlock) BOOL block;
@property(readonly, nonatomic, getter=isXPCObject) BOOL xpcObject;
@property(readonly, nonatomic, getter=isObject) BOOL object;
@property(readonly, nonatomic, getter=isVoid) BOOL isVoid;
@property(readonly, nonatomic, getter=isBoolean) BOOL boolean;
- (id)initWithSignature:(id)arg1 atIndex:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

