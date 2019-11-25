//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FileProvider/FPOperation.h>

#import "FPOperationClient.h"

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface FPFetchAppLibraryIconsOperation : FPOperation <FPOperationClient>
{
    NSDictionary *_itemIdentifierByAppBundleID;
    struct CGSize _desiredSize;
    double _screenScale;
    id <FPOperationProgressDelegate> _delegate;
}

@property(nonatomic) __weak id <FPOperationProgressDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)operationDidProgressWithInfo:(id)arg1 error:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)main;
- (id)initWithAppLibraryItems:(id)arg1 desiredSize:(struct CGSize)arg2 screenScale:(double)arg3;

@end

