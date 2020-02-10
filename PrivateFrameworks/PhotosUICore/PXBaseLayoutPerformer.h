//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PXLayoutPerformer.h"

@class NSArray, PXLayoutPerformerOutput;

@interface PXBaseLayoutPerformer : NSObject <PXLayoutPerformer>
{
    NSArray *children;
    PXLayoutPerformerOutput *layoutOutput;
    CDStruct_8c65c4f4 layoutInput;
}

+ (struct CGSize)performLayoutWithLayoutInput:(CDStruct_8c65c4f4)arg1 layoutOutput:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
@property(nonatomic) CDStruct_8c65c4f4 layoutInput; // @synthesize layoutInput;
@property(retain, nonatomic) PXLayoutPerformerOutput *layoutOutput; // @synthesize layoutOutput;
@property(readonly, nonatomic) NSArray *children; // @synthesize children;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (struct CGSize)performLayout;

@end
