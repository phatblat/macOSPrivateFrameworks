//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FileProvider/FPTransformOperation.h>

@class NSArray, NSDate;

@interface FPSetLastOpenDateOperation : FPTransformOperation
{
    NSArray *_items;
    NSDate *_date;
}

- (void).cxx_destruct;
- (id)fp_prettyDescription;
- (unsigned long long)transformItem:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)initWithItems:(id)arg1 date:(id)arg2;
- (id)replicateForItems:(id)arg1;

@end

