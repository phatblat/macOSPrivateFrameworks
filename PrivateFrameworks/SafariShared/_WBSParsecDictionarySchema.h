//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SafariShared/WBSParsecSchema.h>

@class NSDictionary;

@interface _WBSParsecDictionarySchema : WBSParsecSchema
{
    NSDictionary *_keysToSchemata;
}

@property(copy, nonatomic) NSDictionary *keysToSchemata; // @synthesize keysToSchemata=_keysToSchemata;
- (void).cxx_destruct;
- (BOOL)_validateChild:(id)arg1 ofParent:(id)arg2 withParentAssociatedError:(id)arg3 errorHandler:(CDUnknownBlockType)arg4;
- (id)initWithSchemaDictionary:(id)arg1 associatedError:(id)arg2 isOptional:(BOOL)arg3;

@end

