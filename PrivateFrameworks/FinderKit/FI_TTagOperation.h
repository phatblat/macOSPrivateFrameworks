//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FinderKit/FI_IAsyncNodeOperation.h>

__attribute__((visibility("hidden")))
@interface FI_TTagOperation : FI_IAsyncNodeOperation
{
    // Error parsing type: ^{TTagsTask=^^?i{atomic<bool>=AB}BQ{TFENodeVector=^{TFENode}^{TFENode}{__compressed_pair<TFENode *, std::__1::allocator<TFENode> >=^{TFENode}}}{shared_ptr<TUndoableAction>=^{TUndoableAction}^{__shared_weak_count}}}, name: _task
    struct TNSRef<FI_TTagOperationDelegate *, void> _opDelegate;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)runOperation;
- (int)cancelOperation;
- (int)startSubOperation:(unsigned int)arg1;
- (void)configureOperationRecord:(struct TOperationRecord *)arg1 forIndex:(unsigned long long)arg2;
- (struct TString)authorizationPrompt;
-     // Error parsing type: @32@0:8r^{TFENodeVector=^{TFENode}^{TFENode}{__compressed_pair<TFENode *, std::__1::allocator<TFENode> >=^{TFENode}}}16^{TTagsTask=^^?i{atomic<bool>=AB}BQ{TFENodeVector=^{TFENode}^{TFENode}{__compressed_pair<TFENode *, std::__1::allocator<TFENode> >=^{TFENode}}}{shared_ptr<TUndoableAction>=^{TUndoableAction}^{__shared_weak_count}}}24, name: initWithNodes:forTask:

@end

