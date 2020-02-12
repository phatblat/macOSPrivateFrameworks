//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TMStructureProtocol.h"

@class NSURL, TMStructure<TMAdoptableStructure>;

@protocol AdoptingParentStructure <TMStructureProtocol>
- (NSURL *)URLForAdoptionOfChild:(TMStructure<TMAdoptableStructure> *)arg1 error:(id *)arg2;
- (BOOL)adoptChildStructure:(TMStructure<TMAdoptableStructure> *)arg1 error:(id *)arg2;

@optional
- (void)didAdoptChildStructure:(TMStructure<TMAdoptableStructure> *)arg1;
@end

