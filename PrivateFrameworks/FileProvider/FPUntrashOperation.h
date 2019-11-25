//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FileProvider/FPTransformOperation.h>

@class FPItem;

@interface FPUntrashOperation : FPTransformOperation
{
    FPItem *_restoreDirectory;
    CDUnknownBlockType _untrashCompletionBlock;
}

@property(copy, nonatomic) CDUnknownBlockType untrashCompletionBlock; // @synthesize untrashCompletionBlock=_untrashCompletionBlock;
- (void).cxx_destruct;
- (id)fp_prettyDescription;
- (void)presendNotifications;
- (void)postStitchingFinishWithResult:(id)arg1 error:(id)arg2;
- (unsigned long long)transformItem:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)initWithItems:(id)arg1 restoreDirectory:(id)arg2;
- (id)replicateForItems:(id)arg1;

@end

