//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEEditorModeViewController.h>

@class DVTDiffDescriptor, DVTObservingToken, IDEComparisonEditor, IDEComparisonEditorSubmode;

@interface IDEEditorVersionsMode : IDEEditorModeViewController {
    DVTObservingToken* _editorToken; // 104 = 0x68
    DVTObservingToken* _selectedMergeDescriptorObserver; // 112 = 0x70
    DVTObservingToken* _conflictCountObserver; // 120 = 0x78
    DVTObservingToken* _toggledDiffDescriptorCountObserver; // 128 = 0x80
    CDUnknownBlockType _editorCustomizationBlock; // 136 = 0x88
    DVTDiffDescriptor* _selectedMergeDescriptor; // 144 = 0x90
    unsigned long long _conflictCount; // 152 = 0x98
    int _allDiffDescriptorsToggledState; // 160 = 0xa0
}

+ (BOOL)automaticallyNotifiesObserversOfAllDiffDescriptorsToggledState;
+ (id)keyPathsForValuesAffectingComparisonEditor;
+ (id)keyPathsForValuesAffectingComparisonEditorSubmode;
+ (id)stateSavingIdentifiers;
//- (void).cxx_destruct;
- (id)_initWithPrimaryEditorContext:(id)arg1;
- (id)_liftEditorLayoutConfigurationForIdentifier:(id)arg1;
- (id)_persistentRepresentationForIdentifier:(id)arg1;
- (void)_setPersistentRepresentation:(id)arg1 forIdentifier:(id)arg2;
- (void)_stampEditorLayoutConfiguration:(id)arg1 forIdentifier:(id)arg2;
- (id)_stealPrimaryEditorContext;
@property (nonatomic)
            int allDiffDescriptorsToggledState; // @synthesize
                                                // allDiffDescriptorsToggledState=_allDiffDescriptorsToggledState;
- (BOOL)commitEditingForAction:(int)arg1 errors:(id)arg2;
@property (readonly) IDEComparisonEditor* comparisonEditor;
@property (readonly) IDEComparisonEditorSubmode* comparisonEditorSubmode;
@property unsigned long long conflictCount; // @synthesize conflictCount=_conflictCount;
@property (readonly) BOOL currentSelectedDiffDescriptorToggled;
- (void)discardEditing;
- (id)editorContexts;
@property (copy) CDUnknownBlockType
            editorCustomizationBlock; // @synthesize editorCustomizationBlock=_editorCustomizationBlock;
- (void)loadView;
- (void)primitiveInvalidate;
@property (retain)
            DVTDiffDescriptor* selectedMergeDescriptor; // @synthesize selectedMergeDescriptor=_selectedMergeDescriptor;
@property BOOL showMiniIssueNavigator;
- (void)toggleCurrentSelectedDiffDescriptor;
- (void)untoggleCurrentSelectedDiffDescriptor;
- (void)viewDidInstall;
- (void)viewWillUninstall;

@end
