//
//  Account.h
//  AnyPresence SDK
//

/*!
 @header Account
 @abstract Account class
 */

#import "APObject.h"
#import "Typedefs.h"

/*!
 @class Account
 @abstract Generated model object: Account.
 @discussion Use @link //apple_ref/occ/cat/Account(Remote) @/link to add CRUD capabilities.
 The @link //apple_ref/occ/instp/Account/id @/link field is set as primary key (see @link //apple_ref/occ/cat/APObject(RemoteConfig) @/link) in [self init].
 */
@interface Account : APObject {
}

/*!
 @method dataSource
 @abstract Returns the data source class associated with a Account.
 @result Class representing the data source associated with a Account.
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
@property (nonatomic, strong) NSNumber * copsIndicator;

/*!
 @var detailsExist
 @abstract Generated model property: details_exist.
 */
@property (nonatomic, strong) NSNumber * detailsExist;

/*!
 @var displayAcctNo
 @abstract Generated model property: display_acct_no.
 */
@property (nonatomic, strong) NSString * displayAcctNo;

/*!
 @var isDestinationAccount
 @abstract Generated model property: is_destination_account.
 */
@property (nonatomic, strong) NSNumber * isDestinationAccount;

/*!
 @var isSourceAccount
 @abstract Generated model property: is_source_account.
 */
@property (nonatomic, strong) NSNumber * isSourceAccount;

/*!
 @var offersIndicator
 @abstract Generated model property: offers_indicator.
 */
@property (nonatomic, strong) NSNumber * offersIndicator;

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
@property (nonatomic, strong) NSNumber * txnExist;

@end
