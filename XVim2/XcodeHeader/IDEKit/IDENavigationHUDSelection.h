//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  6 2019 20:12:56).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IDEWorkspaceTabController, IDEWorkspaceTabControllerLayoutTreeNode, IDEWorkspaceWindowController;

@interface IDENavigationHUDSelection : NSObject
{
    IDEWorkspaceTabControllerLayoutTreeNode *_representedLayoutTreeNode;
    IDEWorkspaceWindowController *_workspaceWindowController;
    IDEWorkspaceTabController *_workspaceTabController;
    unsigned long long _attributes;
}

+ (unsigned long long)defaultAttributes;
@property(readonly) unsigned long long attributes; // @synthesize attributes=_attributes;
@property(readonly) IDEWorkspaceTabControllerLayoutTreeNode *representedLayoutTreeNode; // @synthesize representedLayoutTreeNode=_representedLayoutTreeNode;
@property(readonly) IDEWorkspaceTabController *workspaceTabController; // @synthesize workspaceTabController=_workspaceTabController;
@property(readonly) IDEWorkspaceWindowController *workspaceWindowController; // @synthesize workspaceWindowController=_workspaceWindowController;
- (void).cxx_destruct;
- (id)humanReadableStringForRole:(unsigned long long)arg1 inNavigationHUDController:(id)arg2;
- (id)humanReadableStringForOpeningLayoutTreeNode:(id)arg1 withRole:(unsigned long long)arg2 inNavigationHUDController:(id)arg3;
- (id)description;
- (id)currentEditorContextApproximatingSelection;
- (void)revealInUI;
@property(readonly) int editorCoordinatorTarget;
@property(readonly) BOOL representsDirectEditorContextSelection;
@property(readonly) BOOL representsDirectTabBarSelection;
@property(readonly) BOOL representsNewSplitAction;
@property(readonly) BOOL representsNewWorkspaceTabAction;
@property(readonly) BOOL representsNewWorkspaceWindowAction;
- (id)initWithDefaultSelectionInWorkspaceTabController:(id)arg1 workspaceWindowController:(id)arg2 inNavigationHUDController:(id)arg3;
- (id)initWithSelection:(id)arg1;
- (id)initWithWorkspaceWindowController:(id)arg1;
- (id)initWithWorkspaceWindowController:(id)arg1 workspaceTabController:(id)arg2;
- (id)initWithWorkspaceWindowController:(id)arg1 workspaceTabController:(id)arg2 representedLayoutTreeNode:(id)arg3;
- (id)init;

@end

