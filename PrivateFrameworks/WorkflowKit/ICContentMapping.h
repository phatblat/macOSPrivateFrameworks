//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSOrderedSet, NSString;

@interface ICContentMapping : NSObject
{
    NSDictionary *_definition;
}

@property(readonly, nonatomic) NSDictionary *definition; // @synthesize definition=_definition;
- (void).cxx_destruct;
- (void)getStringRepresentation:(CDUnknownBlockType)arg1 withInput:(id)arg2 parameters:(id)arg3;
- (void)getContentCollection:(CDUnknownBlockType)arg1 withInput:(id)arg2 parameters:(id)arg3;
@property(readonly, nonatomic) NSOrderedSet *contentItemClasses;
@property(readonly, nonatomic) BOOL inputRequired;
@property(readonly, nonatomic) BOOL supportsMultipleItems;
@property(readonly, nonatomic) id parameterDefault;
@property(readonly, nonatomic) NSDictionary *parameterUI;
@property(readonly, nonatomic) BOOL skipURLEncoding;
@property(readonly, nonatomic) NSDictionary *valueMapping;
@property(readonly, nonatomic) NSString *destinationKey;
@property(readonly, nonatomic) NSString *sourceKey;
@property(readonly, nonatomic) NSString *destinationType;
@property(readonly, nonatomic) NSString *sourceType;
- (id)initWithDefinition:(id)arg1;

@end

