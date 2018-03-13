//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MLModel, MLModelAsset;

@interface SSCoreMLInterface : NSObject
{
    MLModelAsset *asset;
    MLModel *model;
}

- (void).cxx_destruct;
- (id)getDescription;
- (id)getVersionString;
- (double)predict:(id)arg1 error:(id *)arg2 isL2:(BOOL)arg3;
- (id)initSpecificModel:(id)arg1 error:(id *)arg2;
- (id)initWithURL:(id)arg1 error:(id *)arg2;

@end

