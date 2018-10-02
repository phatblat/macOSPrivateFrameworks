//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray, NSData, NSMutableDictionary, NSString;

@interface RMVersionVector : NSObject <NSCopying>
{
    NSMutableDictionary *_nodeByIdentifier;
    NSString *_editorIdentifier;
}

@property(copy, nonatomic) NSString *editorIdentifier; // @synthesize editorIdentifier=_editorIdentifier;
@property(retain, nonatomic) NSMutableDictionary *nodeByIdentifier; // @synthesize nodeByIdentifier=_nodeByIdentifier;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)debugDescription;
- (id)description;
- (BOOL)isEqualToVersionVector:(id)arg1;
- (BOOL)isConcurrentWithVersionVector:(id)arg1;
- (BOOL)precedesVersionVector:(id)arg1;
- (void)join:(id)arg1;
- (void)incrementNodeWithIdentifier:(id)arg1;
- (unsigned long long)evaluateCausality:(id)arg1;
@property(readonly, nonatomic) NSArray *nodes;
@property(readonly, copy, nonatomic) NSData *dataRepresentation;
- (id)initWithDataRepresentation:(id)arg1;
- (id)initWithNode:(id)arg1;
- (id)init;

@end

