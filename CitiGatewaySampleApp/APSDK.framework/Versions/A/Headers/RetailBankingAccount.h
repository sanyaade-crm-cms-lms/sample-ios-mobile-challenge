//
//  RetailBankingAccount.h
//  AnyPresence SDK
//

/*!
 @header RetailBankingAccount
 @abstract RetailBankingAccount class
 */

#import "APObject.h"
#import "Typedefs.h"

/*!
 @class RetailBankingAccount
 @abstract Generated model object: RetailBankingAccount.
 @discussion Use @link //apple_ref/occ/cat/RetailBankingAccount(Remote) @/link to add CRUD capabilities.
 The @link //apple_ref/occ/instp/RetailBankingAccount/id @/link field is set as primary key (see @link //apple_ref/occ/cat/APObject(RemoteConfig) @/link) in [self init].
 */
@interface RetailBankingAccount : APObject {
}

/*!
 @method dataSource
 @abstract Returns the data source class associated with a RetailBankingAccount.
 @result Class representing the data source associated with a RetailBankingAccount.
 */
+ (Class)dataSource;

/*!
 @var id
 @abstract Generated model property: id.
 @discussion Primary key. Generated on the server.
 */
@property (nonatomic, strong) NSString * id;

/*!
 @var accountStatus
 @abstract Generated model property: account_status.
 */
@property (nonatomic, strong) NSString * accountStatus;

/*!
 @var balances
 @abstract Generated model property: balances.
 */
@property (nonatomic, strong) NSDictionary * balances;

/*!
 @var categoryCode
 @abstract Generated model property: category_code.
 */
@property (nonatomic, strong) NSNumber * categoryCode;

/*!
 @var copsIndicator
 @abstract Generated model property: cops_indicator.
 */
@property (nonatomic, strong) NSString * copsIndicator;

/*!
 @var detailsExist
 @abstract Generated model property: details_exist.
 */
@property (nonatomic, strong) NSString * detailsExist;

/*!
 @var displayAcctNo
 @abstract Generated model property: display_acct_no.
 */
@property (nonatomic, strong) NSString * displayAcctNo;

/*!
 @var isDestinationAccount
 @abstract Generated model property: is_destination_account.
 */
@property (nonatomic, strong) NSString * isDestinationAccount;

/*!
 @var isSourceAccount
 @abstract Generated model property: is_source_account.
 */
@property (nonatomic, strong) NSString * isSourceAccount;

/*!
 @var msgs
 @abstract Generated model property: msgs.
 */
@property (nonatomic, strong) NSDictionary * msgs;

/*!
 @var offersIndicator
 @abstract Generated model property: offers_indicator.
 */
@property (nonatomic, strong) NSString * offersIndicator;

/*!
 @var productCurrency
 @abstract Generated model property: product_currency.
 */
@property (nonatomic, strong) NSString * productCurrency;

/*!
 @var productDescription
 @abstract Generated model property: product_description.
 */
@property (nonatomic, strong) NSString * productDescription;

/*!
 @var productType
 @abstract Generated model property: product_type.
 */
@property (nonatomic, strong) NSNumber * productType;

/*!
 @var txnExist
 @abstract Generated model property: txn_exist.
 */
@property (nonatomic, strong) NSString * txnExist;

@end
