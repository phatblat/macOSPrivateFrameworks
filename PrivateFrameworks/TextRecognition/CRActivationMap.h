//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CRImage, NSArray, NSDictionary;

@interface CRActivationMap : NSObject
{
    CRImage *_cutImage;
    NSArray *_activations;
    NSDictionary *_codeMap;
    NSArray *_codeMapIndex;
}

@property(retain) NSArray *codeMapIndex; // @synthesize codeMapIndex=_codeMapIndex;
@property(retain) NSDictionary *codeMap; // @synthesize codeMap=_codeMap;
@property(retain) NSArray *activations; // @synthesize activations=_activations;
@property(retain) CRImage *cutImage; // @synthesize cutImage=_cutImage;
- (void).cxx_destruct;
- (id)initWithActivation:(id)arg1 codeMapIndex:(id)arg2 codeMap:(int *)arg3 codeMapSize:(int)arg4 blankIndex:(unsigned short)arg5 cutImage:(id)arg6;

@end

